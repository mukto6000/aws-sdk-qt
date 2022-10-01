// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETENAMESPACEREQUEST_H
#define QTAWS_DELETENAMESPACEREQUEST_H

#include "iotthingsgraphrequest.h"

namespace QtAws {
namespace IoTThingsGraph {

class DeleteNamespaceRequestPrivate;

class QTAWSIOTTHINGSGRAPH_EXPORT DeleteNamespaceRequest : public IoTThingsGraphRequest {

public:
    DeleteNamespaceRequest(const DeleteNamespaceRequest &other);
    DeleteNamespaceRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteNamespaceRequest)

};

} // namespace IoTThingsGraph
} // namespace QtAws

#endif
