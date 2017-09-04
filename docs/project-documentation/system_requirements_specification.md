# System Requirements Specification <br> RPG Toolbox

## Change Log

* 1.0
  * Initial release.

## Introduction

### Document's Purpose
The intent of this document is to provide a clear view to the features required by the software. It should be stated what is the purpose of each feature, so that they can be properly designed.

Requirements must be written in a `REQ-XXYY` format, where XX is the features number and YY is the requirement's number. So that they can be easily found and referenced.

### Scope of the Product
RPG Toolbox is a program designed to help GMs and Players in the various aspects of playing RPG tabletop games.

It intends to do so offering several features that are constantly used by GMs and players and can be applied to most systems. It aims to be system agnostic, which means it intends to work on any RPG system by providing general behavior throughout its features. However, and exclusive content for some systems might be included.

### List of features
* [Campaign Creation](#1-campaign-creation)
* [Bestiary](#2-bestiary)
* [Item Vault](#3-item-vault)
* [Party Management](#4-party-management)
* [Encyclopedia](#5-encyclopedia)
* [Random Tables](#6-random-tables)
* [*Virtual Tabletop (optional)*](#7-virtual-tabletop)

## System Features and Requirements

### 1) Campaign Creation
This feature is responsible for the creation and management of every campaign, adventure and event created.

- **REQ-0101:** Users must be able to create events.
- **REQ-0102:** Events must have names and descriptions.
- **REQ-0103:** Events must be able to be linked together.
- **REQ-0104:** Events can be successive.
- **REQ-0105:** Events can be mutually exclusive.
- **REQ-0106:** Events can be mutually inclusive. You can do both A and B in any order, but you're not obliged to do both.
- **REQ-0107:** Events can be of multiple types.
- **REQ-0108:** Events can be of a generic type.
- **REQ-0109:** Events can be of a combat encounter type.
- **REQ-0110:** Events can be of a social encounter type.
- **REQ-0111:** Events can be of a quest begin and quest end type.
- **REQ-0112:** Events can be of a location type. Representing a City or a Dungeon.
- **REQ-0113:** Events must be able to contain other events.
- **REQ-0114:** Events should be displayed in a graphical way.
- **REQ-0115:** Events can be displayed as flowcharts.
- **REQ-0116:** Events can be displayed as mind maps.
- **REQ-0117:** Events can be displayed as a timeline.
- **REQ-0118:** Events can be displayed as a map.
- **REQ-0119:** There can be as many events as wanted.
- **REQ-0120:** Adventures are a type of event.
- **REQ-0121:** Campaigns are a type of event.
- **REQ-0122:** There can only be one campaign.

### 2) Bestiary
This feature should work as database that the user can easily reference and use.

- **REQ-0201:** The user must be able to create Enemies.
- **REQ-0202:** Enemies must have names and descriptions.
- **REQ-0203:** Enemies should be able to have tags.
- **REQ-0204:** Users must be able to create and place tags.
- **REQ-0205:** Enemies must be exportable and importable.
- **REQ-0206:** The user must be able to sort the enemies.
- **REQ-0207:** The user must be able to search the enemies.

### 3) Item Vault
This feature should work as database that the user can easily reference and use.

- **REQ-0301:** The user must be able to create Items.
- **REQ-0302:** Items must have names and descriptions.
- **REQ-0303:** Items should be able to have tags.
- **REQ-0304:** Users must be able to create and place tags.
- **REQ-0305:** Items must be exportable and importable.
- **REQ-0306:** The user must be able to sort the Items.
- **REQ-0307:** The user must be able to search the Items.

### 4) Party Management

- **REQ-0401:** The user must be able to create new characters.
- **REQ-0402:** Characters must have a name and description.
- **REQ-0403:** Characters should be able to be grouped into parties.
- **REQ-0404:** Parties must have a name and description.
- **REQ-0405:** The user must be able to search through characters and parties.

### 5) Encyclopedia

- **REQ-0501:** The Encyclopedia should have a wiki format.
- **REQ-0502:** There can only be one Encyclopedia.
- **REQ-0503:** Users must be able to add articles to the Encyclopedia.
- **REQ-0504:** Articles must have a name a description.
- **REQ-0505:** Articles should be able to be linked with other articles and external elements, such as enemies, characters and events.

### 6) Random Tables

- **REQ-0601:** Users must be able to access the Random Tables at will.
- **REQ-0602:** Users should be able to create new tables.
