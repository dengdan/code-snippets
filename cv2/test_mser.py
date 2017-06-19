import cv2
import util
path = '/home/dengdan/temp_nfs/1.jpg'
img = cv2.imread(path);
#img = cv2.imread(path, 0);
vis = img.copy()
mser = cv2.MSER()
#img = img[:, :, 0]
regions = mser.detect(img, None) # MSCR if img has 3 channels, but remember to convert the color space(YCbCr) before running, 
for r in regions:
    cnts = util.img.points_to_contours(r)
    util.img.draw_contours(vis, cnts, -1, color = util.img.random_color_3())
vis = util.img.resize(vis, 0.5)
vis = util.img.bgr2rgb(vis)
print util.sit(vis)
