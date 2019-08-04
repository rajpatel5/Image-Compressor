# Image-Compressor

This assignment was assigned to by the B09(Software Tools and Systems Programming) course instructor at the University of Toronto. This is a simple, elegant, and powerful image compressor which works with black and white images of type pgm, the grayscale values of each pixel are from 0-255. The image compessor will compress the image based on the following given input: max grayscale difference max depth, input image file, and output image file.

It is coded in C and works in collaboration with the Linux operating system and it's terminal. This assignment uses quad trees to split the input image into four sections based on the given maximum grayscale difference and max depth; it is implemented with recursion hence the depth input variable. It also perfectly works with memory to ensure no memory leaks, tested using valgrind on the Linux terminal.

<p float="left">
  <img src="https://user-images.githubusercontent.com/43008021/58757633-a5741d80-84dd-11e9-94aa-831df546ae0b.jpg" width="150" hspace="20"/>
  <img src="https://user-images.githubusercontent.com/43008021/58757664-24695600-84de-11e9-8e5c-ed76d6c35d96.jpg" width="150" hspace="20"/>
</p>
