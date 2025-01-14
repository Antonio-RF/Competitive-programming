

entrada1 = input()
entrada2 = input()
entrada3 = input()

dados = {
    'vertebrado': {
            'ave':{
                'carnivoro': 'aguia',
                'onivoro': 'pomba'
            },
            'mamifero':{
                'onivoro': 'homem',
                'herbivoro': 'vaca'
            }
    },

    'invertebrado': {
        'inseto':{
            'hematofago': 'pulga',
            'herbivoro': 'lagarta'
        },
        'anelideo':{
            'hematofago': 'sanguessuga',
            'onivoro': 'minhoca'
        }
    }

}

print(dados[entrada1][entrada2][entrada3])