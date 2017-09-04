# RPG Toolbox
RPG Toolbox is a program designed to help GMs and Players in the various aspects of playing RPG tabletop games.

It intends to do so offering several features that are constantly used by GMs and players and can be applied to most systems. It aims to be system agnostic, which means it intends to work on any RPG system by providing general behavior throughout its features. However, and exclusive content for some systems might be included.

The key features that should be delivered and a detailed description of them are as follow:

* [Campaign Creation](#campaign-creation)
* [Bestiary](#bestiary)
* [Item Vault](#item-vault)
* [Party Management](#party-management)
* [Encyclopedia](#encyclopedia)
* [Random Tables](#random-tables)
* [*Virtual Tabletop (optional)*](#virtual-tabletop)

## Campaign Creation

A Campaign is a story told while playing any RPG game, so, every other feature exist to complement this one. Campaigns are made of adventures and adventures are made of events.

### Events

Events are the building blocks of every adventure. Events can be defined as plot points in a story. Each event contains something that is relevant to the story, being it, an social or combat encounter, visiting a city, attempting to perform a task and so on. An Event's content should only be limited by the users creativity.

Events can be chained together to form an adventure, and this can occur in three ways: events can succeed each other, as in A happens after B; events can be exclusive, as in you can do A or B, but not both; and can be mutual, as in you can do both A and B in any order, but you're not obliged to do both.

Events should also be capable of being composed from other events. Like a task having several subtasks that need to be completed for the completion of the main task. Or a minor story ark inside a bigger context.

### Adventures

Adventures are a collection of events chained together to tell a story. Based on that, creating an adventure is crafting multiple events and having them serve a bigger purpose, in a way that, when linked together, they can tell a complete (or at least partial) story.

Adventures can be organized in a graphical way. Either in a flowchart (multiple events in a chain) or in a Mind Map (one central idea with others around). The first is used when a strong linear order is needed and the latter when you have lots of different events with no explicit order in them.

Adventures are the backbone of the software, however, they can be viewed as a special kind of event.

### Campaigns

Campaigns are a collection of adventures and the higher level of design intended. They can be composed of only a single adventure or as many as the user wants. Campaigns should have descriptions and other features and information associated with them.

Campaigns should be displayed in a timeline manner, so that the user can clearly see the succession of events. They can also be seen as a special kind of event that only happens once.

## Bestiary

One of the things unique to RPG games is the enemies, being them monsters, humans or even traps, players face throughout their adventures. Since GMs are always creating and using many kinds of enemies this feature is a must have. A GM should be able to register monsters in a bestiary, which is a database for the enemies used in a Campaign, so that they can be easily referenced to. They also can be used in any future endeavors.

### Enemies

Enemies can be of any kind, limited only by the GMs creativity as usual. Since their atributes vary wildly between systems, only basic information about them should be required. However, it should be possible to create enemies for specific play systems according to their rules.

### Database

As said before, all enemies created should be stored in a database so that they can be easily found, classified, used and reused as often as one finds necessary.

### Integration

When creating an Event that uses an enemy, the GM should be able to quickly insert it there from the database, without having to memorize any of it's attributes or copy it from somewhere else. The GM should also be capable of combining multiple enemies in an Event, and easily remove unwanted enemies.

### Imports and Exports

To stimulate sharing and reuse, a capability of importing/exporting enemies from the computer or others sources is desired.

## Item Vault

Acquiring (magic) items often is one of the reasons many players keep coming session after session, and they play an important role in most, if not all, RPG systems. That's why they deserve a special attention and some features related to them. It ought to work in a very similar way to the Bestiary.

### Items

Being magical or not, it should be easy to create, maintain and use a database of items. Again, each system will have different kinds and needs for items, so a minimal interface is required with possible integration with specifications.

## Party Management

This was though as more of a support system so that GMs can easily manage the information of the players. The main goal here is to store all the information GMs and player find necessary for easy reference.

## Encyclopedia

Playing an RPG game requires handling a lot of information, so, the goal of having an Encyclopedia is to simplify that. Having a wiki format with easy editing and formatting is strongly desired. Fields for player and GM annotations are also required, as well as integration with other systems, so that, enemies, players, places and so can be linked to encyclopedia entries.

## Random Tables

It is impossible to be creative 100% of the time so having somewhere to look for ideas is a must have. Also, sometimes a GM might need to create something on the fly. To accomplish that, a set of pre-built random tables of various subjects should be available and fully integrated with the encyclopedia, so that one can create a new entry from random info. The user should also be able to create new tables for their personal taste.

## Virtual tabletop

A VTT is a virtual environment where one can create visual representations to play the game. This is mostly an optional feature since it demands lots of features by itself. However, it can be a future addition.
