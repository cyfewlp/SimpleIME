## [2.2.0] - 2026-04-06

### 🚀 Features

- Save settings when tool-window menu hide;


**Full Changelog**: https://github.com/cyfewlp/SimpleIME/compare/v2.1.0...v2.2.0

## [2.1.0] - 2026-04-06

### 🚀 Features

- Support configure feature `auto toggle keyboard`: default value now is false;

### ⚙️ Miscellaneous Tasks

- Upgrade imgui/JamieMods


**Full Changelog**: https://github.com/cyfewlp/SimpleIME/compare/v2.0.4...v2.1.0

## [2.0.4] - 2026-03-31

### 🐛 Bug Fixes

- Always pass 'paste' event input even we can't handle it.

### 🚜 Refactor

- Migrate the `translator_manager` and `imgui_system` to the common implement in `JamieMods`

### 📚 Documentation

- Update nexus-mod main page

### ⚙️ Miscellaneous Tasks

- Throw error if cmake version incorrect
- Upgrade the lucide to v1.7.0 and replace the `GitHub` icon to the `layer` icon


**Full Changelog**: https://github.com/cyfewlp/SimpleIME/compare/v2.0.3...v2.0.4

## [2.0.3] - 2026-03-29

### 🐛 Bug Fixes

- Add `IsEnabledPaste` to apply 'enable_unicode_paste' configuration

### 🚜 Refactor

- Always release ctrl key when need handle paste.

### 📚 Documentation

- Improve the integrate SimpleIME requirements doc

### ⚙️ Miscellaneous Tasks

- Keep a changelog(but custom style)!


**Full Changelog**: https://github.com/cyfewlp/SimpleIME/compare/v2.0.2...v2.0.3

## [2.0.2] - 2026-03-29

### 🚀 Features

- *(fomod, cmake)* Use the `configure_file` command automatic update the "fomod/info.xml"

### ⚙️ Miscellaneous Tasks

- *(cliff)* Revert to default config.
- Bump to cmake version v2.0.2
- Remove fomod installer.


**Full Changelog**: https://github.com/cyfewlp/SimpleIME/compare/v2.0.1...v2.0.2

## [2.0.1] - 2026-03-28

### 🐛 Bug Fixes

- *(TaskQueue)* Fix deadlock caused by holding lock during task execution

### ⚙️ Miscellaneous Tasks

- Separate SimpleIME from JamieMods
- Update README,Add clang-format
- Use git-cliff generate changelog for release
- *(fix)* Remove "-c github" arg to avoid multple config file pass
- *(fix)* Fix incorrect release body
- *(fix)* Fix incorrect release body ref;
- Staff
- Use body_path instead of body avoid parse bug


**Full Changelog**: https://github.com/cyfewlp/SimpleIME/compare/v2.0.0...v2.0.1

## [2.0.0] - 2026-03-28

### 🐛 Bug Fixes

- *(SimpleIME)* Construct ImeOverlay if request show;


**Full Changelog**: https://github.com/cyfewlp/SimpleIME/compare/SimpleIME-v2.0.0-beta...v2.0.0

## [SimpleIME-v2.0.0-beta] - 2026-03-26

### 🚀 Features

- *(ime)* Improve Japanese IME mode tracking and keyboard sync (#8)
- *(SimpleIME/LanguageBar)* Supports switch to default english input method.
- *(SimpleIME/FontManager)* Auto-detect system default UI font (ref #13)
- *(SimpleIME/ToolWindowMenu)* Support UserEvents; refactor ImeOverlay/ToolWindow lifecycle
- *(SimpleIME/ImeMenu,ToolWindowMenu)* Only block user input when ToolWindow showing
- *(SimpleIME,Overlay)* Add auto toggle language bar setting and functionality (ref #15)

### 🐛 Bug Fixes

- *(SimpleIME/ImeWindow)* Avoid change ime window position if no pos update policy;
- *(SimpleIME/InputFocusAnchor)* Fix  the unsigned index overflow error in loop;

### 💼 Other

- Improve Mod main page, SimpleIME demo; remove deprecated configuration;
- Fix ToggleMenuModeContextIfNeed bug.
- Sync default configuration;

### 🚜 Refactor

- *(SimpleIME/ImeMenu)* Remove kImeCharEvent validate in IMM32 todo comment;  Fix clang-tidy warnings; Relase static functions to anonymous namespace free funtions;
- *(State)* Change m_state to atomic for thread safety
- *(SimpleIME/ImeWindow)* Remove 'IsNeedRelayout' flag to improve positioning
- *(SimpleIME)* The frame profiler moved to ImeMenu Postdisplay
- *(SimpleIME)* Fix DEBUG macro usage to _DEBUG; move IME states drawing to separate window.
- *(SimpleIME)* Only block events when ToolWindow showing
- *(SimpleIME/TSF)* Deprecate ITfKeystrokeMgr and ITfMessagePump(See ImeWnd::TsfMessageLoop comments)
- *(SimpleIME/Focus)* Refactor focus system: Only guarantee the minimum state requirements of the mod core.

### 📚 Documentation

- Add SimpleIME's nexus mod articles;
- Update doxygen input source; Update nexus docs style and explained the event intercept mechanism.


**Full Changelog**: https://github.com/cyfewlp/SimpleIME/compare/v2.0.0-beta...SimpleIME-v2.0.0-beta

## [2.0.0-beta] - 2026-03-16

### 🚀 Features

- *(SimpleIME/ImeMenu)* Optimize the mouse event capture logic
- *(SimpleIME/ImeUI)* WIP: support preview installed font;
- *(SimpleIME/ImeUI)* WIP: support set default font from preview font;
- *(SimpleIME/ImeUI)* WIP: optimize FontBuilder; move all operations about modify font to NewFrame to avoid crash; consume all ui event when ToolWindowMenu is showing
- *(SimpleIME/ImeUI)* WIP: optmize PreviewFont
- *(SimpleIME/ImeUI)* WIP: checkout ImGui to laster master branch; Remove code specific to the docking branch
- *(SimpleIME/ImeUI)* WIP: refactor PreviewFont & FontBuilder
- *(SimpleIME/ImeUI)* WIP: By set FontDataOwnedByAtlas to false to avoid copy preview font data during merging.
- *(Simple/ImeUI)* Support save the FontBuilder build result. Optimize FontBuilder structure.
- *(Simple/ImeUI, SimpleIME/Configs)* Try to use themeIndex restore theme during init; save themeIndex
- *(SimpleIME)* Add DebounceTimer: debounce for font preview.
- *(SimpleIME/Fonts)* Draw search box with a search icon(Channels API)
- *(SimpleIME/Fonts)* Add the `ScrollY` flag to keep search box always visible;
- *(SimpleIME/Fonts)* Make AddFont button more eye-catching
- *(SimpleIME/Fonts)* Show "preview default font" tips.
- *(SimpleIME/Fonts)* Add some padding to table and file icon
- *(SimpleIME/Fonts)* Add State enum class to show previewPanel state;
- TextField: support the `outlined` style.
- Use the approximation SRGB <-> Linear convertion function to fix `BlendState`.
- Introduce new button and icon button specifications; Reduce/Remove template functions with different colors schema components.
- Add Floating Action Button (FAB) specifications and button group configurations; add new Python script & cmake command to build only used icon to TTF; Remove nerdfont
- Add dependency on icons target in CMake for improved build process
- Limit floating toolbar position within screen margins(see ToolBar specs)
- Refactor TextField config param; Fix: Button/TextField/NavItem correct handle the "##" in label(hide text after this).
- *(SimpleIME/LanguageBar)* Remove unused type aliases
- Update versioning to include pre-release label and improve display format; re-write NexusMod mod main page
- Skip benchmark test if no sources;
- *(m3)* Introduce SameLine to support auto-scale size params;  fix(SimpleIME): Fix ImeWindow 'ENG' the no center align issue

### 🐛 Bug Fixes

- *(SimpleIME/ImeUI)* Configure ImGuiStyle after apply theme correctly;
- *(SimpleIME/ImeUI)* Support save fontSize correctly;
- *(Simple/ImeUI)* Revert the cursor blink change;
- *(Simple)* Fix the refrences that moved Settings memebers;
- *(SimpleIME/Fonts)* By call `BringWindowToDisplayFront` to keep IME window always in topmost;
- This SKSE_Scaleform fn return value is meaningless. Should read from `ControlMap`
- M3Styles#currentScale default value now is 0.0F: avoid `UpdateScaling` early out.
- LanguageBar: OPEN_SETTINGS only set once;
- *(M3/SimpleIME/ImeUI)* Correct indentation for EndNavRail call
- *(SimpleIME)* Fix GFxCharEvent memory leak in ImeMenu
- *(FontManager)* Add FIXME to investigate performance of font query system; add FIXME for IMM32 composition issue
- Update legal copyright to MIT License; adjust CPack output settings and add dist to .gitignore; update fmod info
- *(SimpleIME)* Apply RGB mask to theme source color; update configuration documentation
- *(SimpleIME/Imm32)* Add missing MarkDirty call after composition text change;
- *(cmake)* Add the missing build presets
- *(cmake)* Fix incorrect installation action for lucide license
- *(SimpleIME/ImeMenu)* Add AllowSaving flag to avoid can't save game
- *(SimpleIME/AppearancePanel)* Addd AlphaOpaque to disable alpha preview;

### 💼 Other

- Remove UiHooks; remove message filter related UI elements
- Comment D3d and event hook
- Tier1: fix bug that Imm32TextService eaten messages it didn't process. ; remove ITfKeystrokeMgr
- Imm32TextService: by call ImmAssociateContext to enable/disable ime message when focus changed;  render all states key in debug;
- Fix bug that MsPY candidate list update error in some cases;TextEditor: Collapse selection after inertText; ImeUI: fix bug that the composition strings render incorrectly;
- ToolWindowMenu now use game cursor to avoid the FixInconsistentTextEntryCount is called
- AbortIme if click area not ImeMenu;Call CloseCandidate when end composition if candidate is choosing;
- Remove focus type module; Check "SimpleIME/docs/BUGs.md"
- Pass 2nd parameter with false to disable commonlib init spdlog
- No longer show ImGui cursor; destroy HIMC correctly;
- *(SimpleIME/ImeUI)* Avoid IME UI render area exceeds game window size and overlap text entry; Fix the charBoundaries calculate logic
- *(SimpleIME/ImeUI)* Support preview text with configured fontSize
- *(SimpleIME/ImeUI)* Support ime in ToolWindow and consume char event when ToolWindow is showing; scaleform event handleer function return UI_MESSAGE_RESULTS now;
- *(SimpleIME/ImeUI)* Add help & warning modal
- Refactor configs module; remove AppConfig; Move all the configuration to the Settings;
- *(Simple/ImeUI)* Use the gear icon to replace settings's checkbox;
- *(Simple/ImeUI)* Move the class FontBuilder/View to singleton file; Call AllowTextInput to receive CharEvent;
- Move `FontManager.cpp` to dir `ui/fonts`
- Style: Add ToolBar to combine font builder all interact buttons
- *(SimpleIME/Fonts)* By use the Table `SizingStretchProp` flag to right align a group(ToolBar);
- SimpleIME: Icon fonts are no longer automatically merged into the default font.
- Only first TranslatorHolder##RequestUpdateHandle caller can modify the shared Translator
- Add State machine;remove `context`; ImeMenu/ToolWindowMenu will early out if ImeApp is not initialized.
- Print log to debugger when spdlog is uninstalled
- Move ImeUi to ui package
- Add `ImeWindow`: responsible for drawing IME and automatic layout.
- Settings: Add zoom config; remove `font_size_scale` config;
- Intercept all CharEvnet if IM activated. And send all `ImeWnd` received WM_CHARS message to game.
- Reduce IME window comp/cand padding
- Shutdown spdlog on dll detach
- Theme Builder
- Theme Builder(Adjust styles)
- Try-catch Draw: shutdown if occur any unexpected exception during `Draw()`;
- Optimize M3Styles init flow
- UI layer no longer dependency M3Styles;
- Fix/update ControlMap#ToggleControls call; small fixes;
- Refactor ScaleformHook
- InputFocusAnchor: fix pass value param boundaries incorrect.
- Remove  the HWND paramter from `CommitCandidate`
- Colors add two helper functions; And replace all Surface#hoverd/pressed functions call.
- `ImeController`: Add CommitCandidate method; add Shutdown/IsReady function;
- Adjust LanguageBar style; modify `fmod` install step and remove `ImThemes.png`;
- Move FontPreviewPanel implementation to separate file
- *(SimpleIME)* Support DPI awareness and refactor DPI state
- Remove and replace Surface/ContentToken -> `ColorRole`;
- ColorRole moved to namespace Spec;
- *(ime)* M3 UI redesign & flicker-free candidate buffering**
- Renamed TextStore::GetText parameters to clarify. more restrict acpStart/End validate.
- *(SimpleIME)* M3 Scheme ptr moved to AppearancePanel as member from local static prt;  rename members;
- *(SimpleIME)* Avoid send some document control char to game;
- Refactor CMake/vcpkg layout for multi-project workspace
- Move assets/lucide icons into SimpleIME.
- Common/imguiex -> imguiex/imguiex
- *(SimpleIME/InputFocusAnchor)* Introduce InvalidateCachedMenuIndex fun and called from MenuOpenClose event callback;   Add ImeWnd thread description

### 🚜 Refactor

- *(SimpleIME/Fonts)* Refactor FontBuilder layout; fix: clear usedFontId vector when reset;
- EventHandler
- TranslationLoader. The main section parameter is no longer require.
- Rename imgui to imguiex and update M3 TextRole
- *(SimpleIME)* Rename ImGuiManager -> imgui_system; All member static functions ->  free functions
- Update StyleGuard usage to use template methods for style and color settings
- Refactor `NavItem`
- Use M3::BeginCombo & M3::MenuItem refactor zoom list;
- *(SimpleIME/State)* Optimize state management using bitwise operations
- *(SimpleIME/TextStore)* Rename parameters for clarity and consistency
- *(SimpleIME)* Transition to RAII-based UI lifecycle and simplify Translator architecture
- *(SimpleIME)* Use raw pointer for global translator to avoid destruction order issues
- *(States)* Rename SetTsfFocus to FocusTextService; restyle `states` UI;
- *(SimpleIME/LanguageBar)* Re-layout the font builder
- *(SimpleIME/FontBuilder)* Downgrade some class-static functions to free functions in source file;
- *(ImeManager)* Remove outdated TODO comment; add FIXME in LanguageBar
- *(SimpleIME)* Move himc set/restore logic to the ImeController(closes #6)

### 📚 Documentation

- *(README)* Update project description and enhance build instructions; add features and requirements sections
- *(SimpleIME)* Fill CHANGELOG for v2.0.0-beta release
- Update CMake preset names for SimpleIME build instructions

### 🧪 Testing

- *(Simple)* Add ConfigSerializerTest; remove unused test
- Add TestEditorTest


### New Contributors
* @ made their first contribution
* @Copilot made their first contribution

**Full Changelog**: https://github.com/cyfewlp/SimpleIME/compare/SimpleIME-v1.3.0...v2.0.0-beta

## [SimpleIME-v1.3.0] - 2025-05-30

### 💼 Other

- Discard keydown/up event when message filter is enabled;
- Re-layout settings panel by TabBar
- Skip load failed IME
- Support close message filter once manually
- Draw caret by TextEditor acp selection; try to enable DPI aware in IME thread;
- Support config/save Font_Size
- Remove theme files; update fmod & cpack
- Supports select a candidate by click; deprecated config Highlight_Text_Color
- Prepare release 1.2.1
- Bump to version 1.3.0


**Full Changelog**: https://github.com/cyfewlp/SimpleIME/compare/SimpleIME-v1.2.0...SimpleIME-v1.3.0

## [SimpleIME-v1.2.0] - 2025-05-22

### 💼 Other

- Update mod page;  ErrorNotifier moved to common
- Optimize window pos update logic
- Remove hwndGame field; fix: `AddTask`, `ImeWnd::Focus` incorrect return value
- Add ImeManagerComposerTest; optimize class dependencies
- Add Settings; Remove ImeUIWidgets;
- Update default english translation
- Add `IsShouldEnableIme` to correctly enable ime when checked "KeepImeOpen" or exists text entry;
- Add ToString() for FunctionHooks, HookData; modify UiHooks and ScaleformHooks to singleton
- Bump to version 1.2.0


**Full Changelog**: https://github.com/cyfewlp/SimpleIME/compare/SimpleIME-v1.1.2...SimpleIME-v1.2.0

## [1.1.1] - 2025-04-13

### 🐛 Bug Fixes

- Use GFxMovieView#handleEvent handle paset text; send to TopMenu will cause console menu infinite loop process message;
- Update ConsoleProcessMessageHook se id; OnTextEntryCountChanged support 1.5.97


**Full Changelog**: https://github.com/cyfewlp/SimpleIME/compare/v1.1.0...v1.1.1

## [1.1.0] - 2025-03-29

### 💼 Other

- Disable send `delete` event to ImGui: Hook AllowTextInput to  fix `RaceMenu/Console` text entry can't use IME


**Full Changelog**: https://github.com/cyfewlp/SimpleIME/compare/v1.0.0...v1.1.0

## [1.0.0] - 2025-03-22

### 💼 Other

- Support sync EnableIme, upgrade and fix bug for IsEnable(now IsWantCaptureInput)


**Full Changelog**: https://github.com/cyfewlp/SimpleIME/compare/v0.2.0...v1.0.0

## [0.0.8] - 2025-03-10

### 🐛 Bug Fixes

- Don't install ScaleformHooks if AlwaysActiveIme is true

### 💼 Other

- Integrate ImTheme. parse toml and load as ImGUi theme


**Full Changelog**: https://github.com/cyfewlp/SimpleIME/compare/v0.0.6...0.0.8

## [0.0.4] - 2025-02-12


### New Contributors
* @cyfewlp made their first contribution

