//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITableViewDelegate.h"

@class NSIndexPath, PUICTableView, UITableViewRowAction;

@protocol PUICTableViewDelegate <UITableViewDelegate>

@optional
- (unsigned long long)tableView:(PUICTableView *)arg1 swipeControlsForRowAtIndexPath:(NSIndexPath *)arg2;
- (void)tableView:(PUICTableView *)arg1 didPerformCellAction:(UITableViewRowAction *)arg2 atIndexPath:(NSIndexPath *)arg3;
- (void)tableView:(PUICTableView *)arg1 willPerformCellAction:(UITableViewRowAction *)arg2 atIndexPath:(NSIndexPath *)arg3;
@end

