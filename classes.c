// #include <stdio.h>

// struct cWindow {
// 	int left, right, top, bottom;
// };
// extern const struct cWindowClass {
// 	struct cWindow (*new)(int left, int right, int top, int bottom);
// 	struct cWindow (*copy)(int left, int right, int top, int bottom);
// } Complex;

// static struct cWindow new(int left, int right, int top, int bottom) {
// 	return (struct cWindow) {.left = left, .right = right, .top = top, .bottom = bottom}; 
// }
// const struct cWindowClass cWindow = {.new = &new};


// int main() {
// 	struct cWindow 	c = new(1, 2, 3, 4);
// 	printf("left %d, right %d, top %d, bottom %d", c.left, c.right, c.top, c.bottom);
//     return 0;
// }

#include <stdio.h>

typedef char *tString;
typedef int tBitmap;

// Define the base cWindow structure
struct cWindow {
    int Left;
    int Right;
    int Top;
    int Bottom;
};

// Constructor for cWindow
struct cWindow create_cWindow(int left, int right, int top, int bottom) {
    struct cWindow window;
    window.Left = left;
    window.Right = right;
    window.Top = top;
    window.Bottom = bottom;
    return window;
}

// Define the cHint structure, which includes a cWindow
struct cHint {
    struct cWindow base;
    tString sCaption;
};

// Constructor for cHint
struct cHint create_cHint(int left, int right, int top, int bottom, tString caption) {
    struct cHint hint;
    hint.base = create_cWindow(left, right, top, bottom);
    hint.sCaption = caption;
    return hint;
}

// Define the cBitButton structure, which also includes a cWindow
struct cBitButton {
    struct cWindow base;
    tBitmap aBitmap;
};

// Constructor for cBitButton
struct cBitButton create_cBitButton(int left, int right, int top, int bottom, tBitmap bitmap) {
    struct cBitButton button;
    button.base = create_cWindow(left, right, top, bottom);
    button.aBitmap = bitmap;
    return button;
}

int main() {
	tString caption = "Hint hint...";
	tBitmap bitmap = 911;
    struct cWindow window 	 = create_cWindow(10, 100, 20, 150);
    struct cHint hint 		 = create_cHint(5, 80, 10, 60, caption);
    struct cBitButton button = create_cBitButton(30, 120, 50, 180, bitmap);

    printf("cWindow: Left=%d, Right=%d, Top=%d, Bottom=%d \n", window.Left, window.Right, window.Top, window.Bottom);
    printf("cHint: Left=%d, Right=%d, Top=%d, Bottom=%d, Caption=%s \n", hint.base.Left, hint.base.Right, hint.base.Top, hint.base.Bottom, hint.sCaption);
    printf("cBitButton: Left=%d, Right=%d, Top=%d, Bottom=%d, Bitmap=%d \n", button.base.Left, button.base.Right, button.base.Top, button.base.Bottom, button.aBitmap);

    return 0;
}