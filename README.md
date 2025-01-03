# CSS Selectors

## Selectors with specificity
**a** - ID selector  
**b** - Class selector, Attribute selector, Pseudo-Class  
**c** - Type selector, Pseudo-Element

## No specificity:
Universal selector(`*`)  <sup>Selector</sup>  
Descendant(` `)  <sup>Combinator</sup>  
Direct child(`>`)  <sup>Combinator</sup>  
Adjacent sibling(`+`)  <sup>Combinator</sup>  
Subsequent sibling(`~`)  <sup>Combinator</sup>  
Group(`,`)  <sup>Combinator</sup>  

## Selectors  

### Type Selector:
> [!Note]
> The CSS [**type selector**](https://developer.mozilla.org/en-US/docs/Web/CSS/Type_selectors) matches elements by node name. In other words, it selects all elements of the given type within a document.     

***Example:***  
`/* All <p> and <a> elements. */`  
```css
p { color: red }  
a { text-decoration: none }  
```

### Attribute Selector:
> [!Note]
> The CSS [attribute selector](https://developer.mozilla.org/en-US/docs/Web/CSS/Attribute_selectors) matches elements based on the element having a given attribute explicitly set, with options for defining an attribute value or substring value match.  

- `[att]` - matches elements with the `att` attribute.  
- `[att=val]` - matches elements with the `att` attribute whose value is exactly `val`.  
- `[att~=val]` - matches elements with the `att` attribute whose value is a separated list of words, one of which is exactly `val`.  
- `[att|=val]` - matches elements with the `att` attribute, its value either being exactly `val` or beginning with `val-`.   
- Primarily intended to be used for attributes whose value is a language tag. Examples: en-US, en-GB.  
- For the xml, the :lang attribute and the HTML lang attribute the :lang(C) pseudo-class should be used.  

***Example:***  
`/* <a> elements with a title attribute which has a value "italic" */`  
```css
a[title=italic] {
      color: purple;
```

### Class Selector:  
> [!Note]
> The CSS [class selector](https://developer.mozilla.org/en-US/docs/Web/CSS/Class_selectors) matches elements based on the contents of their `class` attribute.  

***Example:***  
`/* All <li> elements with class="spacious" */`
```css
li.spacious {
  margin: 2em;
}
```

### ID Selector:
> [!Note]
> The CSS [ID selector](https://developer.mozilla.org/en-US/docs/Web/CSS/ID_selectors) matches an element based on the value of the element's `id` attribute.  
> - In order for the element to be selected, its `id` attribute must match exactly the value given in the selector.  
> - A selector of the form `#identifier` matches the element with that identifier. 
 
***Example:***  
`/* All div elements with id="main" */`  
```css
div#main {
      width: 50%;
      margin-left: auto;
      margin-right: auto;
}
```

### Pseudo-class Selector:
> [!Note]
> A CSS [pseudo-class](https://developer.mozilla.org/en-US/docs/Web/CSS/Pseudo-classes) is a keyword added to a selector that lets you style a specific state of the selected element(s).
> - Pseudo-class names are case-insensitive.  
> - Selectors of the form `:identifier` or `:identifier(value)`.

#### The Link pseudo-classes:
 - `:link` - applies to links that have not yet been visited.
 - `:visited` - applies to links that have been visited.
#### The User action pseudo-classes:  
 - `:hover` - applies while the user designates an element with a pointing device, but does not necessarily activate it.  
 - `:active` - applies while an element is being activated by the user.  
 - `:focus` - applies while an element has the focus (accepts keyboard or mouse events, or other forms of input).  
#### The `:target` pseudo-class:  
:bulb: When the URI of the document contains a fragment identifier, `:target` represents the element referred by the fragment.  
#### The `:lang(C)` pseudo-class:  
:bulb: Represents elements that are in language C, where C is a CSS identifier.
#### The UI element states pseudo-classes:  
 - `:enabled` - represents user interface elements that are in an enabled state.
 - `:disabled` - represents user interface elements that are in a disabled state.
 - `:checked` - represents user interface elements that are in a **“checked”** state (for example, radio buttons, checkboxes).
#### The Structural pseudo-classes:
 - `:root` - represents the root element of the document.
 - `:only-child` - represents elements that have no siblings.
 - `:only-of-type` - represents elements that have no siblings with the same element name.
 - `:empty` - represents elements that have no children at all.
 - `:nth-child()` - matches child elements according to their position among all the sibling elements within a parent element.
 - `:nth-last-child()` - matches elements based on their position among a group of siblings, counting from the end.
 - `:nth-of-type()` - matches elements based on their position among siblings of the same type (tag name).
 - `:nth-last-of-type()` - matches elements based on their position among siblings of the same type, counting from the end.
 
 - `:first-child` - the first element among a group of sibling elements, has the same meaning as `:nth-child(1)`.
 - `:last-child` - the last element among a group of sibling elements, has the same meaning as `:nth-last-child(1)`.
 - `:first-of-type` - the first element of its type among a group of sibling elements, same meaning as `:nth-of-type(1)`.
 - `:last-of-type` - the last element of its type among a group of sibling elements, same meaning as `:nth-last-of-type(1)`.
#### The negation pseudo-class:
:bulb: `:not(X)` - matches elements that do not match the argument, where the argument is a simple selector 
- Excluding the negation pseudo-class itself.
- **Only the argument is taken into account when calculating specificity!**   

***Example:***
- The selector `h1:not(h2)` is practically equivalent to the selector `h1`, but it has a higher specificity: **(a = 0,b = 0,c = 2)**.

#### `:is()` pseudo-class:  
:bulb: A selector of the form `:is(X)` where the argument is a selector list.  
- Matches any element that can be matched by any of the selectors in the list argument.  

***Example:***  
```css
div:is(.note, .warning, .hint)::before {
      /* ... */
}
```
**is the same as**
```css
div.note::before, div.warning::before, div.hint::before {
      /* ... */
}
```

### Pseudo-element Selector:
> [!Note]
> In CSS, a [pseudo-element](https://developer.mozilla.org/en-US/docs/Glossary/Pseudo-element) selector applies styles to parts of your document content in scenarios where there isn't a specific HTML element to select.
> - Pseudo-elements allow authors to refer to content in the document that is otherwise inaccessible. 
> - Only one pseudo-element may appear per selector.

##### `::first-line`  
:bulb: Represents the first formatted line of an element.  

***Example:***
```css
p::first-line {
      text-decoration: underline
}
```
##### `::first-letter` 
:bulb: Represents the first letter or digit of an element, if it is not preceded by any other content (such as images) on its line.  
:bulb: Also applies to any punctuation character that precedes or follows the first letter.  

***Example:***
```css
p::first-letter {
      font-size: 2em;
      font-weight: bold;
}
```
##### `::before` and `::after`
:bulb: They can be used to describe generated content before or after an element’s content.  

***Example:***
```css
div.proof::before {
      content: "Proof: ";
      font-weight: bold;
}
```
```css
div.proof::after {
      content: "\220E" /* End of proof */
}
```

### Universal Selector: 
> [!NOTE]
> The CSS [universal selector](https://developer.mozilla.org/en-US/docs/Web/CSS/Universal_selectors) (`*`) matches elements of any type.  

***Example:***

`/* Selects all elements */`
```css
* {
   color: green;
}
```


## Combinators:

### Descendant(` `):
> [!Note]
> The [descendant combinator](https://developer.mozilla.org/en-US/docs/Web/CSS/Descendant_combinator) — typically represented by a single space (` `) character — combines two selectors such that elements matched by the second selector are selected if they have an ancestor (regardless of their depth within the parent element) element matching the first selector. 
> - Selectors that utilize a descendant combinator are called descendant selectors.

***Example:***  

`/* List items that are descendants of the "my-things" list */`
```css
ul.my-things li {
      margin: 2em;
}
```

### Direct child(`>`):
> [!Note]
> The [child combinator](https://developer.mozilla.org/en-US/docs/Web/CSS/Child_combinator) — it matches only those elements matched by the second selector that are the direct children of elements matched by the first.
> - Elements matched by the second selector must be the immediate children of the elements matched by the first selector.  

***Example:***  

`/* List items that are children of the "my-things" list */`
```css
ul.my-things > li {
      margin: 2em;
}
```

### Adjacent sibling(`+`):
> [!Note]
> The [next-sibling combinator](https://developer.mozilla.org/en-US/docs/Web/CSS/Next-sibling_combinator) - separates two selectors and matches the second element only if it immediately follows the first element, and both are children of the same parent element.  

***Example:***  

`/* Paragraphs that come immediately after any image */`
```css
img + p {
      font-weight: bold;
}
```

### Subsequent sibling(`~`):
> [!Note]
> The [subsequent-sibling combinator](https://developer.mozilla.org/en-US/docs/Web/CSS/Subsequent-sibling_combinator) - separates two selectors and matches all instances of the second element that follow the first element (not necessarily immediately) and share the same parent element.  

***Example:***  

`/* the subsequent-sibling combinator (~) helps to select and style paragraphs that are both siblings of an image and appear after any image */`
```css
img ~ p {
      color: red;
}
```

### Group(`,`):
> [!NOTE]
> The CSS [selector list](https://developer.mozilla.org/en-US/docs/Web/CSS/Selector_list) (`,`) selects all the matching nodes. 
> - A selector list is a comma-separated list of selectors.
> - When multiple selectors share the same declarations, they can be grouped together into a comma-separated list.  

***Example:***  

```css
span, div {
      border: red 2px solid;
}
```

##### :copyright: Made by Tursinbaev Begdulla ([@mrbekacs](https://github.com/mrbekacs)) 