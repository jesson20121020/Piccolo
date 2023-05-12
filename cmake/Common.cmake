
# 定义链接类型
set(LINK_TYPE SHARED CACHE STRING "Choose Python Link Type: STATIC or SHARED" FORCE)
set_property(CACHE LINK_TYPE PROPERTY STRINGS STATIC SHARED)

# 平台定义
set(PLATFORM_WIN "Windows")
set(PLATFORM_MAC "Mac")
set(PLATFORM_LINUX "Linux")
set(PLATFORM_IOS "IOS")
set(PLATFORM_ANDROID "Android")

# 平台架构
set(PLATFORM_ARCH_WIN_X86 "x86")
set(PLATFORM_ARCH_WIN_X64 "x64")
set(PLATFORM_ARCH_MAC_X64 "x64")
set(PLATFORM_ARCH_MAC_ARM64 "armv64")

set(TARGET_PLATFORM ${PLATFORM_WIN} CACHE STRING "Choose Build Target Platform")
set(TARGET_PLATFORM_ARCH ${PLATFORM_ARCH_WIN_X64} CACHE STRING "Choose Build target Platform Arch")


set(PROJECT_TYPE_PRECOMPILED "Precompiled")
set(PROJECT_TYPE_NORMAL "Normal")