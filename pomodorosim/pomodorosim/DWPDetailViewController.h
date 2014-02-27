//
//  DWPDetailViewController.h
//  pomodorosim
//
//  Created by davidw on 2/27/14.
//  Copyright (c) 2014 davidw. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface DWPDetailViewController : UIViewController <UISplitViewControllerDelegate>

@property (strong, nonatomic) id detailItem;

@property (weak, nonatomic) IBOutlet UILabel *detailDescriptionLabel;
@end
