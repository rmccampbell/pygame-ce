/* Auto generated file: with makeref.py .  Docs go in docs/reST/ref/ . */
#define DOC_PYGAMERECT "pygame module for rect classes"
#define DOC_PYGAMERECTRECT "Rect(left, top, width, height) -> Rect\nRect((left, top), (width, height)) -> Rect\nRect(object) -> Rect\npygame object for storing rectangular coordinates"
#define DOC_RECTCOPY "copy() -> Rect\ncopy the rectangle"
#define DOC_RECTMOVE "move(x, y) -> Rect\nmoves the rectangle"
#define DOC_RECTMOVEIP "move_ip(x, y) -> None\nmoves the rectangle, in place"
#define DOC_RECTINFLATE "inflate(x, y) -> Rect\ngrow or shrink the rectangle size"
#define DOC_RECTINFLATEIP "inflate_ip(x, y) -> None\ngrow or shrink the rectangle size, in place"
#define DOC_RECTUPDATE "update(left, top, width, height) -> None\nupdate((left, top), (width, height)) -> None\nupdate(object) -> None\nsets the position and size of the rectangle"
#define DOC_RECTCLAMP "clamp(Rect) -> Rect\nmoves the rectangle inside another"
#define DOC_RECTCLAMPIP "clamp_ip(Rect) -> None\nmoves the rectangle inside another, in place"
#define DOC_RECTCLIP "clip(Rect) -> Rect\ncrops a rectangle inside another"
#define DOC_RECTCLIPLINE "clipline(x1, y1, x2, y2) -> ((cx1, cy1), (cx2, cy2))\nclipline(x1, y1, x2, y2) -> ()\nclipline((x1, y1), (x2, y2)) -> ((cx1, cy1), (cx2, cy2))\nclipline((x1, y1), (x2, y2)) -> ()\nclipline((x1, y1, x2, y2)) -> ((cx1, cy1), (cx2, cy2))\nclipline((x1, y1, x2, y2)) -> ()\nclipline(((x1, y1), (x2, y2))) -> ((cx1, cy1), (cx2, cy2))\nclipline(((x1, y1), (x2, y2))) -> ()\ncrops a line inside a rectangle"
#define DOC_RECTUNION "union(Rect) -> Rect\njoins two rectangles into one"
#define DOC_RECTUNIONIP "union_ip(Rect) -> None\njoins two rectangles into one, in place"
#define DOC_RECTUNIONALL "unionall(Rect_sequence) -> Rect\nthe union of many rectangles"
#define DOC_RECTUNIONALLIP "unionall_ip(Rect_sequence) -> None\nthe union of many rectangles, in place"
#define DOC_RECTFIT "fit(Rect) -> Rect\nresize and move a rectangle with aspect ratio"
#define DOC_RECTNORMALIZE "normalize() -> None\ncorrect negative sizes"
#define DOC_RECTCONTAINS "contains(Rect) -> bool\ntest if one rectangle is inside another"
#define DOC_RECTCOLLIDEPOINT "collidepoint(x, y) -> bool\ncollidepoint((x,y)) -> bool\ntest if a point is inside a rectangle"
#define DOC_RECTCOLLIDERECT "colliderect(Rect) -> bool\ntest if two rectangles overlap"
#define DOC_RECTCOLLIDELIST "collidelist(list) -> index\ntest if one rectangle in a list intersects"
#define DOC_RECTCOLLIDELISTALL "collidelistall(list) -> indices\ntest if all rectangles in a list intersect"
#define DOC_RECTCOLLIDEOBJECTS "collideobjects(rect_list) -> object\ncollideobjects(obj_list, key=func) -> object\ntest if any object in a list intersects"
#define DOC_RECTCOLLIDEOBJECTSALL "collideobjectsall(rect_list) -> objects\ncollideobjectsall(obj_list, key=func) -> objects\ntest if all objects in a list intersect"
#define DOC_RECTCOLLIDEDICT "collidedict(dict) -> (key, value)\ncollidedict(dict) -> None\ncollidedict(dict, use_values=0) -> (key, value)\ncollidedict(dict, use_values=0) -> None\ntest if one rectangle in a dictionary intersects"
#define DOC_RECTCOLLIDEDICTALL "collidedictall(dict) -> [(key, value), ...]\ncollidedictall(dict, use_values=0) -> [(key, value), ...]\ntest if all rectangles in a dictionary intersect"


/* Docs in a comment... slightly easier to read. */

/*

pygame.rect
pygame module for rect classes

pygame.rect.Rect
 Rect(left, top, width, height) -> Rect
 Rect((left, top), (width, height)) -> Rect
 Rect(object) -> Rect
pygame object for storing rectangular coordinates

pygame.rect.Rect.copy
 copy() -> Rect
copy the rectangle

pygame.rect.Rect.move
 move(x, y) -> Rect
moves the rectangle

pygame.rect.Rect.move_ip
 move_ip(x, y) -> None
moves the rectangle, in place

pygame.rect.Rect.inflate
 inflate(x, y) -> Rect
grow or shrink the rectangle size

pygame.rect.Rect.inflate_ip
 inflate_ip(x, y) -> None
grow or shrink the rectangle size, in place

pygame.rect.Rect.update
 update(left, top, width, height) -> None
 update((left, top), (width, height)) -> None
 update(object) -> None
sets the position and size of the rectangle

pygame.rect.Rect.clamp
 clamp(Rect) -> Rect
moves the rectangle inside another

pygame.rect.Rect.clamp_ip
 clamp_ip(Rect) -> None
moves the rectangle inside another, in place

pygame.rect.Rect.clip
 clip(Rect) -> Rect
crops a rectangle inside another

pygame.rect.Rect.clipline
 clipline(x1, y1, x2, y2) -> ((cx1, cy1), (cx2, cy2))
 clipline(x1, y1, x2, y2) -> ()
 clipline((x1, y1), (x2, y2)) -> ((cx1, cy1), (cx2, cy2))
 clipline((x1, y1), (x2, y2)) -> ()
 clipline((x1, y1, x2, y2)) -> ((cx1, cy1), (cx2, cy2))
 clipline((x1, y1, x2, y2)) -> ()
 clipline(((x1, y1), (x2, y2))) -> ((cx1, cy1), (cx2, cy2))
 clipline(((x1, y1), (x2, y2))) -> ()
crops a line inside a rectangle

pygame.rect.Rect.union
 union(Rect) -> Rect
joins two rectangles into one

pygame.rect.Rect.union_ip
 union_ip(Rect) -> None
joins two rectangles into one, in place

pygame.rect.Rect.unionall
 unionall(Rect_sequence) -> Rect
the union of many rectangles

pygame.rect.Rect.unionall_ip
 unionall_ip(Rect_sequence) -> None
the union of many rectangles, in place

pygame.rect.Rect.fit
 fit(Rect) -> Rect
resize and move a rectangle with aspect ratio

pygame.rect.Rect.normalize
 normalize() -> None
correct negative sizes

pygame.rect.Rect.contains
 contains(Rect) -> bool
test if one rectangle is inside another

pygame.rect.Rect.collidepoint
 collidepoint(x, y) -> bool
 collidepoint((x,y)) -> bool
test if a point is inside a rectangle

pygame.rect.Rect.colliderect
 colliderect(Rect) -> bool
test if two rectangles overlap

pygame.rect.Rect.collidelist
 collidelist(list) -> index
test if one rectangle in a list intersects

pygame.rect.Rect.collidelistall
 collidelistall(list) -> indices
test if all rectangles in a list intersect

pygame.rect.Rect.collideobjects
 collideobjects(rect_list) -> object
 collideobjects(obj_list, key=func) -> object
test if any object in a list intersects

pygame.rect.Rect.collideobjectsall
 collideobjectsall(rect_list) -> objects
 collideobjectsall(obj_list, key=func) -> objects
test if all objects in a list intersect

pygame.rect.Rect.collidedict
 collidedict(dict) -> (key, value)
 collidedict(dict) -> None
 collidedict(dict, use_values=0) -> (key, value)
 collidedict(dict, use_values=0) -> None
test if one rectangle in a dictionary intersects

pygame.rect.Rect.collidedictall
 collidedictall(dict) -> [(key, value), ...]
 collidedictall(dict, use_values=0) -> [(key, value), ...]
test if all rectangles in a dictionary intersect

*/
#define DOC_RECT "Rect(left, top, width, height) -> Rect\nRect((left, top), (width, height)) -> Rect\nRect(object) -> Rect\npygame object for storing rectangular coordinates"
#define DOC_RECT_COPY "copy() -> Rect\ncopy the rectangle"
#define DOC_RECT_MOVE "move(x, y) -> Rect\nmoves the rectangle"
#define DOC_RECT_MOVEIP "move_ip(x, y) -> None\nmoves the rectangle, in place"
#define DOC_RECT_INFLATE "inflate(x, y) -> Rect\ngrow or shrink the rectangle size"
#define DOC_RECT_INFLATEIP "inflate_ip(x, y) -> None\ngrow or shrink the rectangle size, in place"
#define DOC_RECT_UPDATE "update(left, top, width, height) -> None\nupdate((left, top), (width, height)) -> None\nupdate(object) -> None\nsets the position and size of the rectangle"
#define DOC_RECT_CLAMP "clamp(Rect) -> Rect\nmoves the rectangle inside another"
#define DOC_RECT_CLAMPIP "clamp_ip(Rect) -> None\nmoves the rectangle inside another, in place"
#define DOC_RECT_CLIP "clip(Rect) -> Rect\ncrops a rectangle inside another"
#define DOC_RECT_CLIPLINE "clipline(x1, y1, x2, y2) -> ((cx1, cy1), (cx2, cy2))\nclipline(x1, y1, x2, y2) -> ()\nclipline((x1, y1), (x2, y2)) -> ((cx1, cy1), (cx2, cy2))\nclipline((x1, y1), (x2, y2)) -> ()\nclipline((x1, y1, x2, y2)) -> ((cx1, cy1), (cx2, cy2))\nclipline((x1, y1, x2, y2)) -> ()\nclipline(((x1, y1), (x2, y2))) -> ((cx1, cy1), (cx2, cy2))\nclipline(((x1, y1), (x2, y2))) -> ()\ncrops a line inside a rectangle"
#define DOC_RECT_UNION "union(Rect) -> Rect\njoins two rectangles into one"
#define DOC_RECT_UNIONIP "union_ip(Rect) -> None\njoins two rectangles into one, in place"
#define DOC_RECT_UNIONALL "unionall(Rect_sequence) -> Rect\nthe union of many rectangles"
#define DOC_RECT_UNIONALLIP "unionall_ip(Rect_sequence) -> None\nthe union of many rectangles, in place"
#define DOC_RECT_FIT "fit(Rect) -> Rect\nresize and move a rectangle with aspect ratio"
#define DOC_RECT_NORMALIZE "normalize() -> None\ncorrect negative sizes"
#define DOC_RECT_CONTAINS "contains(Rect) -> bool\ntest if one rectangle is inside another"
#define DOC_RECT_COLLIDEPOINT "collidepoint(x, y) -> bool\ncollidepoint((x,y)) -> bool\ntest if a point is inside a rectangle"
#define DOC_RECT_COLLIDERECT "colliderect(Rect) -> bool\ntest if two rectangles overlap"
#define DOC_RECT_COLLIDELIST "collidelist(list) -> index\ntest if one rectangle in a list intersects"
#define DOC_RECT_COLLIDELISTALL "collidelistall(list) -> indices\ntest if all rectangles in a list intersect"
#define DOC_RECT_COLLIDEOBJECTS "collideobjects(rect_list) -> object\ncollideobjects(obj_list, key=func) -> object\ntest if any object in a list intersects"
#define DOC_RECT_COLLIDEOBJECTSALL "collideobjectsall(rect_list) -> objects\ncollideobjectsall(obj_list, key=func) -> objects\ntest if all objects in a list intersect"
#define DOC_RECT_COLLIDEDICT "collidedict(dict) -> (key, value)\ncollidedict(dict) -> None\ncollidedict(dict, use_values=0) -> (key, value)\ncollidedict(dict, use_values=0) -> None\ntest if one rectangle in a dictionary intersects"
#define DOC_RECT_COLLIDEDICTALL "collidedictall(dict) -> [(key, value), ...]\ncollidedictall(dict, use_values=0) -> [(key, value), ...]\ntest if all rectangles in a dictionary intersect"
