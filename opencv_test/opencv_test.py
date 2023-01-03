import cv2

print(cv2.__version__)
image = cv2.imread('/home/python/images/face.jpg', cv2.IMREAD_UNCHANGED)
height, width, channel = image.shape

# 변환
image_flip = cv2.flip(image, 0)

# 회전
matrix = cv2.getRotationMatrix2D((width/2, height/2), 45, 1)
image_rotate = cv2.warpAffine(image, matrix, (width, height))

# 색상변환
image_gray = cv2.cvtColor(image, cv2.COLOR_BGRA2GRAY)

cv2.imshow('image_reader', image)
# cv2.imshow('image_reader2', image_flip)
# cv2.imshow('image_reader3', image_rotate)
cv2.imshow('image_reader4', image_gray)
cv2.waitKey(0)
cv2.destroyWindow()
