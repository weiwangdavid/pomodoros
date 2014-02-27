//
//  DWPMasterViewController.h
//  pomodorosim
//
//  Created by davidw on 2/27/14.
//  Copyright (c) 2014 davidw. All rights reserved.
//

#import <UIKit/UIKit.h>

@class DWPDetailViewController;

#import <CoreData/CoreData.h>

@interface DWPMasterViewController : UITableViewController <NSFetchedResultsControllerDelegate>

@property (strong, nonatomic) DWPDetailViewController *detailViewController;

@property (strong, nonatomic) NSFetchedResultsController *fetchedResultsController;
@property (strong, nonatomic) NSManagedObjectContext *managedObjectContext;

@end
