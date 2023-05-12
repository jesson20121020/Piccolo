project_begin()
project_name("lzma")
project_version("5.2.5")
project_source_dir("xz-5.2.5")

project_add_source_inclues(
	"src/common"
	"src/liblzma"
)
project_add_source_excludes(
	"src/liblzma/check/crc64_small.c"
	"src/liblzma/check/crc32_small.c"
	"src/liblzma/check/crc64_tablegen.c"
	"src/liblzma/check/crc32_tablegen.c"
	"src/liblzma/check/fastpos_tablegen.c"
	"src/liblzma/rangecoder/price_tablegen.c"
	"src/liblzma/fastpos_tablegen.c"
	"src/common/common_w32res.rc"
)

project_add_include_dirs(
"windows/vs2019"
"src/liblzma/common"
"src/common"
"src/liblzma/api"
"src/liblzma/check"
"src/liblzma/delta"
"src/liblzma/lz"
"src/liblzma/lzma"
"src/liblzma/rangecoder"
"src/liblzma/simple"
)

project_add_definitions("HAVE_CONFIG_H")

project_end()