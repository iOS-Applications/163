//
//  CommViewController.h
//  163评论
//
//  Created by zhaofuqiang on 14-5-7.
//  Copyright (c) 2014年 zhaofuqiang. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "Contents.h"

@interface CommViewController : UIViewController <UITableViewDataSource,UITableViewDelegate>

@property (nonatomic,weak) IBOutlet UITableView *tableView;

@property (nonatomic,strong) NSNumber *postID;
@property (nonatomic,strong) Contents *contents;

@end
