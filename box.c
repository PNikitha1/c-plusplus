#include<stdio.h>

struct Box
{
  int m_length;
  int m_breadth;
  int m_height;
};

void initializeBox(struct Box* boxPtr, int length, int breadth, int height)
{
  boxPtr->m_length = length;
  boxPtr->m_breadth = breadth;
  boxPtr->m_height = height;
}

const int computeVolumeOfTheBox(const struct Box* boxPtr) 
{
  return boxPtr->m_length * boxPtr->m_breadth * boxPtr->m_height;
}

const int computeTotalSurfaceAreaOfTheBox(const struct Box* boxPtr)
{
  return 2 * (boxPtr->m_length * boxPtr->m_breadth + 
              boxPtr->m_breadth * boxPtr->m_height + 
              boxPtr->m_height * boxPtr->m_length);
}

void updateBoxDimensions(struct Box* boxPtr, double scale)
{
  boxPtr->m_length *= scale;
  boxPtr->m_breadth *= scale;
  boxPtr->m_height *= scale;
}

const void displayBoxDimensions(const struct Box* boxPtr)
{
  printf("Length: %d\n", boxPtr->m_length);
  printf("Breadth: %d\n", boxPtr->m_breadth);
  printf("Height: %d\n", boxPtr->m_height);
}

int main()
{
  struct Box b1;
  initializeBox(&b1, 10, 12, 15);
  
  int volume = computeVolumeOfTheBox(&b1);
  printf("Volume: %d\n", volume);
  
  int surfaceArea = computeTotalSurfaceAreaOfTheBox(&b1);
  printf("Surface Area: %d\n", surfaceArea);
  
  updateBoxDimensions(&b1, 1.25);
  displayBoxDimensions(&b1);
  
  return 0;
}
