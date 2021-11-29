#include "../include/model.h"

void Model::addModel(unique_ptr<Model> m){
    models.emplace_back(m);
}