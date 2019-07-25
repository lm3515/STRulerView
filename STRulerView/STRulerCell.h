//
//  STRulerCell.h
//  STRuler
//
//  Created by liuzhixiong on 2018/9/3.
//  Copyright © 2018年 liuzhixiong. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "STRulerModel.h"

NS_ASSUME_NONNULL_BEGIN

@interface STRulerCell : UICollectionViewCell

@property (nonatomic, strong) STRulerModel *model;

- (void)updateCellWithText:(NSString *)showText
                      font:(UIFont *)font
                 textColor:(UIColor *)textColor
        textLargeLineSpace:(CGFloat)space
                isSelected:(BOOL)isSelected;

- (void)updateCellinPointColor:(UIColor *)color
                       pointWH:(CGFloat)wh
                    largeSpace:(CGFloat)space
                        isShow:(BOOL)isShow;


@end

NS_ASSUME_NONNULL_END
