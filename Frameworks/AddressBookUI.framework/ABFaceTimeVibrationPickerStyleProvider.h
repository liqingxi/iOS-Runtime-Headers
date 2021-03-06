/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
 */

@class UIColor, UIFont;

@interface ABFaceTimeVibrationPickerStyleProvider : NSObject <TKVibrationPickerStyleProvider> {
    struct UIOffset { 
        float horizontal; 
        float vertical; 
    struct UIEdgeInsets { 
        float top; 
        float left; 
        float bottom; 
        float right; 
    UIColor *_vibrationPickerCellHighlightedTextColor;
    UIFont *_vibrationPickerCellTextFont;
    UIFont *_vibrationPickerHeaderTextFont;
    } _vibrationPickerHeaderTextPaddingInsets;
    UIColor *_vibrationPickerHeaderTextShadowColor;
    } _vibrationPickerHeaderTextShadowOffset;
}

@property(readonly) UIColor * vibrationPickerCellBackgroundColor;
@property(readonly) UIColor * vibrationPickerCellHighlightedTextColor;
@property(readonly) UIColor * vibrationPickerCellTextColor;
@property(readonly) UIFont * vibrationPickerCellTextFont;
@property(readonly) UIColor * vibrationPickerHeaderTextColor;
@property(readonly) UIFont * vibrationPickerHeaderTextFont;
@property(readonly) struct UIEdgeInsets { float x1; float x2; float x3; float x4; } vibrationPickerHeaderTextPaddingInsets;
@property(readonly) UIColor * vibrationPickerHeaderTextShadowColor;
@property(readonly) struct UIOffset { float x1; float x2; } vibrationPickerHeaderTextShadowOffset;
@property(readonly) int vibrationPickerTableViewSeparatorStyle;
@property(readonly) BOOL vibrationPickerUsesOpaqueBackground;
@property(readonly) BOOL wantsCustomVibrationPickerHeaderView;

- (id)newAccessoryDisclosureIndicatorViewForVibrationPickerCell;
- (id)newBackgroundViewForSelectedVibrationPickerCell:(BOOL)arg1;
- (id)vibrationPickerCellBackgroundColor;
- (id)vibrationPickerCellHighlightedTextColor;
- (id)vibrationPickerCellTextColor;
- (id)vibrationPickerCellTextFont;
- (id)vibrationPickerHeaderTextColor;
- (id)vibrationPickerHeaderTextFont;
- (struct UIEdgeInsets { float x1; float x2; float x3; float x4; })vibrationPickerHeaderTextPaddingInsets;
- (id)vibrationPickerHeaderTextShadowColor;
- (struct UIOffset { float x1; float x2; })vibrationPickerHeaderTextShadowOffset;
- (int)vibrationPickerTableViewSeparatorStyle;
- (BOOL)vibrationPickerUsesOpaqueBackground;
- (BOOL)wantsCustomVibrationPickerHeaderView;

@end
