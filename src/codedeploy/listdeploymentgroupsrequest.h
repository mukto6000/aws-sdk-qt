// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTDEPLOYMENTGROUPSREQUEST_H
#define QTAWS_LISTDEPLOYMENTGROUPSREQUEST_H

#include "codedeployrequest.h"

namespace QtAws {
namespace CodeDeploy {

class ListDeploymentGroupsRequestPrivate;

class QTAWSCODEDEPLOY_EXPORT ListDeploymentGroupsRequest : public CodeDeployRequest {

public:
    ListDeploymentGroupsRequest(const ListDeploymentGroupsRequest &other);
    ListDeploymentGroupsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListDeploymentGroupsRequest)

};

} // namespace CodeDeploy
} // namespace QtAws

#endif
