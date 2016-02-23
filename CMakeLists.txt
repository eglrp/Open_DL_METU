add_subdirectory (image)
add_subdirectory (nonfree)



#INSTALL RULES
INSTALL(
  DIRECTORY .
  DESTINATION include/Open_DL_METU
  COMPONENT headers
  FILES_MATCHING PATTERN "*.hpp" PATTERN "*.h"
)