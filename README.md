# Image-Compressor

This assignment was assigned to by the B09 (Software Tools and Systems Programming) course instructor at the University of Toronto. This is a simple, elegant, and powerful image compressor which works with black and white images of type pgm, the gray-scale values of each pixel are from 0-255. The image compressor will compress the image based on the following given input: max gray-scale difference max depth, input image file, and output image file.

It is coded in C and works in collaboration with the Linux operating system and it's terminal. This assignment uses quad trees to split the input image into four sections based on the given maximum gray-scale difference and max depth; it is implemented with recursion hence the depth input variable. It also perfectly works with memory to ensure no memory leaks, tested using valgrind on the Linux terminal.

<div>
  <img src="https://user-images.githubusercontent.com/43008021/62431068-3049e200-b6f2-11e9-9eae-2bcb24ef34f0.jpg" width="256" hspace="20"/>
  <img src="https://user-images.githubusercontent.com/43008021/62431253-dba76680-b6f3-11e9-98b9-e9ed9682b00a.png" width="256"/>
  <img src="https://user-images.githubusercontent.com/43008021/62431223-7784a280-b6f3-11e9-9969-6d62533f8130.jpg" width="256" hspace="20"/>
</div>
