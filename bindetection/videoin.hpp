#ifndef VIDEOIN_HPP__
#define VIDEOIN_HPP__

#include "opencv2/highgui/highgui.hpp"
#include "opencv2/imgproc/imgproc.hpp"
#include "opencv2/objdetect/objdetect.hpp"

class VideoIn
{
   public:
      VideoIn(const char *path);
      VideoIn(int stream = -1);

      cv::VideoCapture *VideoCap(void) 
      {
	 if (_video)
	    return &_cap;
	 return NULL;
      }
      bool getNextFrame(bool pause, cv::Mat &frame);
      int frameCounter(void);
      void frameCounter(int frameCount)
      {
	 _frameCounter = frameCount;
      }

   private:
      cv::VideoCapture _cap;
      cv::Mat          _frame;
      int              _frameCounter;
      bool             _video;
};
#endif

