//
//  HomeViewController.h
//  ZhiWeiboPhone
//
//  Created by junmin liu on 12-8-25.
//  Copyright (c) 2012年 idfsoft. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "TimelineQuery.h"
#import "TweetViewCell1.h"
#import "TweetViewCellLayout.h"

#import "ProfileViewController.h"

@interface HomeViewController : UITableViewController {
    NSMutableArray *_statuses;
}

@property (nonatomic, retain) NSMutableArray *statuses;

@end
