/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
 */

@interface VGLPrefilteredLineProgram : VGLProgram {
    struct _VGLColor { 
        float r; 
        float g; 
        float b; 
        float a; 
    struct { 
        float x; 
        float y; 
        float z; 
        float w; 
    float _canvasHeight;
    float _canvasWidth;
    } _color;
    float _halfWidth;
    int _uCanvasHeight;
    int _uCanvasWidth;
    int _uColor;
    int _uHalfWidth;
    int _uVertexOffset;
    int _uZScale;
    } _vertexOffset;
    float _zScale;
}

@property float canvasHeight;
@property float canvasWidth;
@property struct _VGLColor { float x1; float x2; float x3; float x4; } color;
@property float halfWidth;
@property struct { float x1; float x2; float x3; float x4; } vertexOffset;
@property float zScale;

+ (id)fragName;
+ (id)vertName;

- (id).cxx_construct;
- (float)canvasHeight;
- (float)canvasWidth;
- (struct _VGLColor { float x1; float x2; float x3; float x4; })color;
- (float)halfWidth;
- (void)setCanvasHeight:(float)arg1;
- (void)setCanvasWidth:(float)arg1;
- (void)setColor:(struct _VGLColor { float x1; float x2; float x3; float x4; })arg1;
- (void)setHalfWidth:(float)arg1;
- (void)setVertexOffset:(struct { float x1; float x2; float x3; float x4; })arg1;
- (void)setZScale:(float)arg1;
- (void)setup;
- (struct { float x1; float x2; float x3; float x4; })vertexOffset;
- (float)zScale;

@end
