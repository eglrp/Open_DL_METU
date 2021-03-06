#ifndef OPEN_DL_METU_FEATURE_KEYPOINT_DETECTOR_HPP
#define OPEN_DL_METU_FEATURE_KEYPOINT_DETECTOR_HPP

#include <vector>
#include "Open_DL_METU/feature/keypoint.hpp"
#include "Open_DL_METU/image/image.hpp"

namespace Open_DL_METU {
namespace feature {

	//template<class T> class Image;
	typedef image::Image<unsigned char> UcharImage;
	
	// A pure virtual class for keypoint detectors. We assume that the keypoint
	// detectors only use grayimages for now.
	class KeypointDetector {

		public:
			KeypointDetector() {}
  			virtual ~KeypointDetector() {}

  			// Use this method to initialize any internals. Only use the constructor for
  			// basic operations since the debug trace is limited for errors in the
  			// constructor.
  			virtual bool Initialize() { return true; }


  			// Detect keypoints using the desired method. This method will allocate the
  			// Keypoint pointers in the vector with new, but the caller owns the data
  			// returned (and must delete the pointers).
  			virtual bool DetectKeypoints(const UcharImage& image, std::vector<Keypoint>* keypoints) = 0;

		private:
  			//DISALLOW_COPY_AND_ASSIGN(KeypointDetector);
	


	};
}		// namespace feature
}		// namespace Open_DL_METU


#endif // OPEN_DL_METU_FEATURE_KEYPOINT_DETECTOR_HPP