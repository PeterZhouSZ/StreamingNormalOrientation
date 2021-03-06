FIND_PATH(VIGRA_INCLUDE_DIR
          vigra/basicimage.hxx
          HINTS $ENV{VIGRA_ROOT}/include
)

INCLUDE(FindPackageHandleStandardArgs)
FIND_PACKAGE_HANDLE_STANDARD_ARGS(Vigra DEFAULT_MSG VIGRA_INCLUDE_DIR)

MARK_AS_ADVANCED( VIGRA_INCLUDE_DIR )