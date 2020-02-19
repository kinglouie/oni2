open Oni_Extensions;

module Msg = {
	type t =
	| Resized(unit)
	| Updated(unit);
}

module Sub = {
	let create = (~id, ~cmd, ~columns, ~rows, ~extClient) => Isolinear.Sub.none;
}

module Effect = {
	let input = (~id, ~input) => Isolinear.Effect.none;

	let resize = (~id, ~rows, ~columns) => Isolinear.Effect.none;
}