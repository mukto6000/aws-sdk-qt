// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_REMOVEFROMGLOBALCLUSTERREQUEST_H
#define QTAWS_REMOVEFROMGLOBALCLUSTERREQUEST_H

#include "neptunerequest.h"

namespace QtAws {
namespace Neptune {

class RemoveFromGlobalClusterRequestPrivate;

class QTAWSNEPTUNE_EXPORT RemoveFromGlobalClusterRequest : public NeptuneRequest {

public:
    RemoveFromGlobalClusterRequest(const RemoveFromGlobalClusterRequest &other);
    RemoveFromGlobalClusterRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(RemoveFromGlobalClusterRequest)

};

} // namespace Neptune
} // namespace QtAws

#endif
