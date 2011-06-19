//
//  MainViewController.h
//  BTCView
//
//  Created by Fernando Chorney on 11-06-18.
//  Copyright 2011 Rollout Studios. All rights reserved.
//

#import "TickerViewController.h"

@interface MainViewController : UITableViewController {
    UITabBarController *_tabBarController;
    
    UINavigationController *_tickerNavigationController;
    TickerViewController *_tickerViewController;
}

@property (nonatomic, retain) UITabBarController *tabBarController;
@property (nonatomic, retain) UINavigationController *tickerNavigationController;
@property (nonatomic, retain) TickerViewController *tickerViewController;

@end
