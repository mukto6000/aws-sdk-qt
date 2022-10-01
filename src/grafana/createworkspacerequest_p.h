// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEWORKSPACEREQUEST_P_H
#define QTAWS_CREATEWORKSPACEREQUEST_P_H

#include "grafanarequest_p.h"
#include "createworkspacerequest.h"

namespace QtAws {
namespace Grafana {

class CreateWorkspaceRequest;

class CreateWorkspaceRequestPrivate : public GrafanaRequestPrivate {

public:
    CreateWorkspaceRequestPrivate(const GrafanaRequest::Action action,
                                   CreateWorkspaceRequest * const q);
    CreateWorkspaceRequestPrivate(const CreateWorkspaceRequestPrivate &other,
                                   CreateWorkspaceRequest * const q);

private:
    Q_DECLARE_PUBLIC(CreateWorkspaceRequest)

};

} // namespace Grafana
} // namespace QtAws

#endif
