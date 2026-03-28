//
// Created by jamie on 2025/5/21.
//

#pragma once

#include <functional>
#include <mutex>
#include <queue>

namespace Ime
{
class TaskQueue
{
public:
    using Task = std::function<void()>;

    void AddImeThreadTask(Task &&task)
    {
        const std::scoped_lock lock(m_mutex);
        m_imeThreadTasks.push(std::move(task));
    }

    void AddMainThreadTask(Task &&task)
    {
        const std::scoped_lock lock(m_mutex);
        m_mainThreadTasks.push(std::move(task));
    }

private:
    auto SwapTaskQueue(std::queue<Task> &taskQueue) -> std::queue<Task>
    {
        const std::scoped_lock lock(m_mutex);
        std::queue<Task>       temp;
        taskQueue.swap(temp);
        return temp;
    }

    void ExecutesTasks(std::queue<Task> &tasks)
    {
        std::queue<Task> newTaskQueue = SwapTaskQueue(tasks);
        while (!newTaskQueue.empty())
        {
            newTaskQueue.front()();
            newTaskQueue.pop();
        }
    }

public:
    void ExecuteImeThreadTasks() { ExecutesTasks(m_imeThreadTasks); }

    void ExecuteMainThreadTasks() { ExecutesTasks(m_mainThreadTasks); }

    static auto GetInstance() -> TaskQueue &
    {
        static TaskQueue instance;
        return instance;
    }

private:
    std::mutex       m_mutex;
    std::queue<Task> m_imeThreadTasks;
    std::queue<Task> m_mainThreadTasks;
};
} // namespace Ime
