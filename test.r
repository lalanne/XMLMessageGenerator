
################# FUNCTIONS ####################

cellIds_from_messages <- function(){
    library(XML)
    doc=xmlTreeParse("/Users/clalanne/MyCode/XMLMessageGenerator/messages.xml", useInternalNodes = TRUE)
    list_of_cellIds=xpathApply(doc,"//cellId",xmlValue)
    return(list_of_cellIds)
}

import_raw_lookup_table <- function(){
    mydata = read.csv("/Users/clalanne/MyCode/XMLMessageGenerator/AllMasts.csv")  # read csv file
    return(mydata)
}

build_hash_table <- function(raw_lookup_table){
    hash_table = new.env()
    for(i in seq(nrow(raw_lookup_table))){
        key = as.character(raw_lookup_table[i,"SiteID"])
        easting = as.character(raw_lookup_table[i,"Easting"])
        northing = as.character(raw_lookup_table[i,"Northing"])

        hash_table[[key]] = c(easting,northing)
    };
    return(hash_table)
}

obtain_coordenates <- function(cell_ids, hash_table){
    points = data.frame(easting=numeric(1),northing=numeric(1),stringsAsFactors=TRUE)

    for(i in cell_ids){
        point = hash_table[[i]]
        print(point)
        points = rbind(points,point)
    }
    return(points)
}

################# MAIN ####################

cell_ids = cellIds_from_messages()
raw_lookup_table = import_raw_lookup_table()
hash_table = build_hash_table(raw_lookup_table)
points = obtain_coordenates(cell_ids, hash_table)

points

warnings()
