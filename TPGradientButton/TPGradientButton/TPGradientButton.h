//
//  TPGradientButton.h
//  LocalTest
//
//  Created by ztp on 2022/10/12.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface TPGradientColor : NSObject
/**
 *  Array of UIColor
 */
@property (nonatomic, strong, readonly) NSArray *colors;
/**
 *  初始化渐变色对象
 *  @param colors 颜色数组
 *  @return 渐变色对象
 */
+ (instancetype)gradientColorWithColors:(NSArray *)colors;

@end

/**
 *  渐变方向
 */
typedef NS_ENUM(NSInteger, TPGradientDirection){
    
    /**
     *  左上右下
     */
    TPDirectionLeftTopToRightBottom,
    /**
     *  左下右上
     */
    TPDirectionLeftBottomToRightTop,
    /**
     *  水平方向
     */
    TPDirectionLeftToRight,
    /**
     *  垂直方向
     */
    TPDirectionTopToBottom
    
};


@interface TPGradientButton : UIButton


/**
 *  边框宽, 默认0，无边框
 */
@property (nonatomic, assign) CGFloat borderWidth;
/**
 *  边框颜色，默认nil，无颜色
 */
@property (nonatomic, strong) UIColor *borderColor;

/**
 *  圆角，默认UIRectCornerAllCorners
 */
@property (nonatomic, assign) UIRectCorner corner;
/**
 *  圆角半径，默认0
 */
@property (nonatomic, assign) CGFloat cornerRadius;

/**
 *  渐变方向,默认左上右下
 */
@property (nonatomic, assign) TPGradientDirection gradientDirection;


- (void)setBackgroundColor:(UIColor *)backgroundColor forState:(UIControlState)state;
- (UIColor *)backgroundColorForState:(UIControlState)state;

- (void)setGradientColor:(TPGradientColor *)gradientColor forState:(UIControlState)state;
- (TPGradientColor *)gradientColorForState:(UIControlState)state;


@end

NS_ASSUME_NONNULL_END
