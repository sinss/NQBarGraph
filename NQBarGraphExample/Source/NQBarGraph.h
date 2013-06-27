//
//  NQBarGraph.h
//  NQBarGraphExample
//
//  Created by AhmedElnaqah on 6/2/13.
//  Copyright (c) 2013 elnaqah. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface NQBarGraph : UIView
@property float spaceBetweenBars;
@property float barWidth;
@property (strong) UIColor * linesColor;
@property (strong) UIColor * numbersColor;
@property (strong) UIColor * numbersTextColor;
@property (strong) UIColor * dateColor;
@property (strong) UIColor * barColor;
@property (nonatomic,strong) NSArray * dataSource;
@property (strong) UIColor * textColor;
@property (strong) UIColor * dottedLineColor;
@property (strong) UIColor * barOuterLine;
@property int numberOfVerticalElements;
@property (strong) NSString * datesBarText;
@property (strong) NSString * tasksBarText;
@property (strong) NSString * fontName;
@property CGFloat dateFontSize;
@property CGFloat titlesFontSize;
@end