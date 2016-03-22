add_subdirectory (image)
add_subdirectory (feature)
add_subdirectory (nonfree)
add_subdirectory (video)



#INSTALL RULES
INSTALL(
  DIRECTORY .
  DESTINATION include/Open_DL_METU
  COMPONENT headers
  FILES_MATCHING PATTERN "*.hpp" PATTERN "*.h"
)