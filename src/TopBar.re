[@bs.module] external logo : string = "./assets/Marvel-Logo.png";
/*
  this is used to declare and initialize our component.
  The name provided is the name that this component will have in the React Dev tools.
  This line doesn't name our component in the code for us.
*/
let component = ReasonReact.statelessComponent("TopBar");

let str = ReasonReact.stringToElement;

let style =
  Css.(
    {
      "header": style([
        backgroundColor(rgba(238, 35, 45, 1.0)),
        display(`flex),
        justifyContent(`spaceBetween),
        alignItems(`center)
      ]),
      "title": style([
        color(white),
        fontSize(px(36)),
        fontWeight(700)
      ]),
      "logo": style([
        width(px(200)),
        height(px(130)),
        marginLeft(px(32))
      ]),
      "search_input_wrapper": style([
        marginRight((px(32)))
      ]),
      "search_input": style([
        marginRight(px(8))
      ])
    }
  );

let make = (_children) => {
  ...component,
  render: (_self) =>
    <header className=style##header>
      <a href="#">
        <img className=style##logo src={logo} />
      </a>
      <span className=style##title>(str("Super Marvel Heroes"))</span>
      <div className=style##search_input_wrapper>
        <input className=style##search_input placeholder="search" />
        <button> (str("Search")) </button>
      </div>
    </header>
};