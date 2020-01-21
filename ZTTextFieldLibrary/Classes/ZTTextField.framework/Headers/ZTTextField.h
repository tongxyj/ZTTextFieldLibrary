//
//  ZTTextField.h
//  ZTTextField
//
//  Created by zhaitong on 2020/1/21.
//  Copyright © 2020 chebada.bashiguanjia. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
//! Project version number for ZTTextField.
FOUNDATION_EXPORT double ZTTextFieldVersionNumber;

//! Project version string for ZTTextField.
FOUNDATION_EXPORT const unsigned char ZTTextFieldVersionString[];

// In this header, you should import all the public headers of your framework using statements like #import <ZTTextField/PublicHeader.h>


typedef NS_ENUM(NSInteger, ZTTextFieldType) {
    ZTTextFieldTypeNoBorder = 0,
    ZTTextFieldTypeNormal,
};

IB_DESIGNABLE
@interface ZTTextField : UITextField
typedef NSString *(^FormatValidationBlock)(ZTTextField *textField);
/**
 * Text to be displayed above the field.
 */
@property (nonatomic, copy) IBInspectable NSString *upperPhText;
/**
 * Text to be displayed in the field.
 */
@property (nonatomic, copy) IBInspectable NSString *editingPhText;
/**
 * FontSize of placeholder Label.
 */
@property (nonatomic, assign) IBInspectable CGFloat upperPhFontSize;
/**
 * Text color to be applied to floating placeholder text when not editing.
 * Default is 70% gray.
 */
@property (nonatomic, strong) IBInspectable UIColor *placeholderInactiveColor;
/**
 * Text color to be applied to floating placeholder text when editing.
 * Default is tint color.
 */
@property (nonatomic, strong) IBInspectable UIColor *placeholderActiveColor;
/**
 * Hint label text.
 */
@property (nonatomic, copy) IBInspectable NSString *hintLabelText;
/**
 * FontSize of hint Label.
 */
@property (nonatomic, assign) IBInspectable CGFloat hintLabelFontSize;
/**
 * block vertify the text format
 */
@property (nonatomic, copy) FormatValidationBlock validationBlk;
/**
 * The type of the textfield
 */
@property (nonatomic, assign) ZTTextFieldType textFieldType;

- (void)textFieldShowWrongMessage:(NSString *)sWrongMessage;
@end
