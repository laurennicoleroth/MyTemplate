//
//  MasterViewController.h
//  MyTemplate
//
//  Created by Lauren Nicole Roth on 8/15/17.
//  Copyright © 2017 Lauren Nicole Roth. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <CoreData/CoreData.h>
#import "MyTemplate+CoreDataModel.h"

@class DetailViewController;

@interface MasterViewController : UITableViewController <NSFetchedResultsControllerDelegate>

@property (strong, nonatomic) DetailViewController *detailViewController;

@property (strong, nonatomic) NSFetchedResultsController<Event *> *fetchedResultsController;
@property (strong, nonatomic) NSManagedObjectContext *managedObjectContext;


@end

