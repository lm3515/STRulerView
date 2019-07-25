//
//  STRulerModel.h
//  STRuler
//
//  Created by liuzhixiong on 2018/9/3.
//  Copyright © 2018年 liuzhixiong. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface STRulerModel : NSObject

typedef NS_ENUM(NSInteger, STRulerAlignmentType) {
    STRulerCenter = 0,
    STRulerBottom
};


@property (nonatomic,assign) CGFloat                lineWidth;
@property (nonatomic,assign) CGFloat                largeLineHeight;
@property (nonatomic,assign) CGFloat                smallLineHeight;
@property (nonatomic,assign) CGFloat                lineSpace;
@property (nonatomic,strong) UIColor              * largeLineColor;
@property (nonatomic,strong) UIColor              * smallLineColor;
@property (nonatomic,assign) BOOL                   isLargeLine;
@property (nonatomic,assign) STRulerAlignmentType alignment;


@end

NS_ASSUME_NONNULL_END
