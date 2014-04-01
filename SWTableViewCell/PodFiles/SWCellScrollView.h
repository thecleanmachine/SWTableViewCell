//
//  SWCellScrollView.h
//  SWTableViewCell
//
//  Created by Matt Bowman on 11/27/13.
//  Copyright (c) 2013 Chris Wendel. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface SWCellScrollView : UIScrollView <UIGestureRecognizerDelegate>

// JM: Allow app to specify other views with PanGestureRecognizers that should not be allowed to recognize simultaneously with the SWCellScrollView,
// e.g. if the tableView lives within a horizontally scrolling scrollView.
@property (nonatomic, strong) NSArray* nonSimultaneousPanGestureViews;

@end
