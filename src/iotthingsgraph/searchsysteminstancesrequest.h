// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_SEARCHSYSTEMINSTANCESREQUEST_H
#define QTAWS_SEARCHSYSTEMINSTANCESREQUEST_H

#include "iotthingsgraphrequest.h"

namespace QtAws {
namespace IoTThingsGraph {

class SearchSystemInstancesRequestPrivate;

class QTAWSIOTTHINGSGRAPH_EXPORT SearchSystemInstancesRequest : public IoTThingsGraphRequest {

public:
    SearchSystemInstancesRequest(const SearchSystemInstancesRequest &other);
    SearchSystemInstancesRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(SearchSystemInstancesRequest)

};

} // namespace IoTThingsGraph
} // namespace QtAws

#endif
