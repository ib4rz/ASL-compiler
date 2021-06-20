# ASL-compiler

> Pràctica de compiladors en ASL (edició primavera 2021)

Podeu trobar detalls i documentació del projecte [aquí](http://www.cs.upc.edu/~padro/CL/practica).

## Usage

Executar comandes en la carpeta `ASL-compiler/asl`.

* Executar tots els jocs de proves:

```sh
./check-examples.sh
```

* Per veure les diferencies entre la sortida del `asl` i la sortida esperada en un joc de proves concret de **type check**, es fa:

```sh
./asl ../examples/jp_genc_XX.asl > ../examples/jp_genc_XX
```

* Per veure les diferencies entre la sortida del `asl` i la sortida esperada en un joc de proves concret de **generació de codi**, es fa:

```sh
./asl ../examples/jp_genc_XX.asl > jp_XX.t
../tvm/tvm jp_XX.t < ../examples/jp_genc_XX.in | diff -y - ../examples/jp_genc_XX.out
```
