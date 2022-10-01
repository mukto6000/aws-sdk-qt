// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_SEARCHENTITIESREQUEST_H
#define QTAWS_SEARCHENTITIESREQUEST_H

#include "iotthingsgraphrequest.h"

namespace QtAws {
namespace IoTThingsGraph {

class SearchEntitiesRequestPrivate;

class QTAWSIOTTHINGSGRAPH_EXPORT SearchEntitiesRequest : public IoTThingsGraphRequest {

public:
    SearchEntitiesRequest(const SearchEntitiesRequest &other);
    SearchEntitiesRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(SearchEntitiesRequest)

};

} // namespace IoTThingsGraph
} // namespace QtAws

#endif
