#ifndef PGMIO_H
#define PGMIO_H

typedef struct image {
  // Pointer to pixel grayscale.  Row-major order.
  // unsigned char on x86-64 is 0-255, just right for grayscale.
  unsigned char *data;

  // Width and height of the image
  // We are working with square images here, so you can
  // safely assume the height and width will be the same
  int sx;
  int sy;                       
} Image;

/* Allocate blank image from heap.
 */
Image *newImage(int sx, int sy);

/* Deallocate image. Assume it was allocated from heap, e.g., from newImage.
 */
void freeImage(Image *im);

/* Read image from PGM file (binary version). Space for the image is malloc'ed.
 */
Image *readPGMimage(const char *filename);

/* Write image to PGM file (binary version. */
void writePGMimage(Image *im, const char *filename);

#endif  /* ifndef PGMIO_H */
