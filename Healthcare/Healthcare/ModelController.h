//
//  ModelController.h
//  Healthcare
//
//  Created by Rahul Bhatt on 7/25/15.
//  Copyright (c) 2015 Rahul Bhatt. All rights reserved.
//

#import <UIKit/UIKit.h>

@class DataViewController;

@interface ModelController : NSObject <UIPageViewControllerDataSource>

- (DataViewController *)viewControllerAtIndex:(NSUInteger)index storyboard:(UIStoryboard *)storyboard;
- (NSUInteger)indexOfViewController:(DataViewController *)viewController;

@end

