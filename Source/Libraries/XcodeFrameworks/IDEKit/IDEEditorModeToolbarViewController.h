/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "DVTToolbarViewController.h"

@interface IDEEditorModeToolbarViewController : DVTToolbarViewController
{
}

+ (id)_imagesForImageNames:(id)arg1;
- (id)_editorModeViewController;
- (void)_segmentStateDidChange:(id)arg1;
- (void)_setEditorMode:(int)arg1;
- (void)_setEditorModeForMenuItem:(id)arg1;
- (long long)_stateForMenuItemTag:(long long)arg1 editorModeClass:(Class)arg2 classAccessor:(SEL)arg3 instanceAccessor:(SEL)arg4;
- (id)initWithToolbarItemIdentifier:(id)arg1 window:(id)arg2;
- (id)menuForMenuFormRepresentation;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;

@end

