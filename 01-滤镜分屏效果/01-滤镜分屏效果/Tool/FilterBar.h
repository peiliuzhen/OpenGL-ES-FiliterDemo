//
//  FilterBar.h
//  01-滤镜分屏效果
//
//  Created by plz on 2020/8/8.
//  Copyright © 2020 plz. All rights reserved.
//

#import <UIKit/UIKit.h>

@class FilterBar;

@protocol FilterBarDelegate <NSObject>

- (void)filterBar:(FilterBar *)filterBar didScrollToIndex:(NSUInteger)index;

@end

@interface FilterBar : UIView

@property (nonatomic, strong) NSArray <NSString *> *itemList;

@property (nonatomic, weak) id<FilterBarDelegate> delegate;

@end
