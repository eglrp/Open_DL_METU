

#include "Open_DL_METU/video/video_IO.hpp"
#include "Open_DL_METU/video/ffmpeg_sampler.hpp"


#include <cstring>
#include <iostream>
#include <cmath>


using namespace std;

namespace Open_DL_METU {
namespace video {
    
int readVideo(const char *  inPath, const char *  outPath){

    std::cout << "inside read video IO " << std::endl;

    FfmpegSampler ffmpegsampler;

    ffmpegsampler.SampleVideo(inPath, outPath);

    return 0;
}

   

}
}



