//
//  GSTimeIntervalPicker.h
//  Timelines
//
//  Created by Lukas Petr on 12/1/16.
//  Copyright © 2016 Glimsoft. All rights reserved.
//

//
//  This picker aims to replicate UIDatePicker in countDownTimer mode,
//  with one major improvement: support for setting maximum time interval,
//

#import <UIKit/UIKit.h>

@interface GSTimeIntervalPicker : UIPickerView

@property (nonatomic, assign) NSTimeInterval maxTimeInterval;
@property (nonatomic, assign) NSInteger minuteInterval;         // Used as a 'step' in minutes column. Default is 1 minute.

@property (nonatomic, assign) BOOL allowZeroTimeInterval;       // Default is NO.
@property (nonatomic, assign) BOOL infiniteScroll;       // Default is NO.

@property (nonatomic, assign) NSTimeInterval timeInterval;

@property (nonatomic, strong) UIFont *pickerFont;

- (void)setTimeInterval:(NSTimeInterval)timeInterval animated:(BOOL)animated;

@property (copy) void (^onTimeIntervalChanged)(NSTimeInterval newTimeInterval);

@end
