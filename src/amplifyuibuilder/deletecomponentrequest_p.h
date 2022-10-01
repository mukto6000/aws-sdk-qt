// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETECOMPONENTREQUEST_P_H
#define QTAWS_DELETECOMPONENTREQUEST_P_H

#include "amplifyuibuilderrequest_p.h"
#include "deletecomponentrequest.h"

namespace QtAws {
namespace AmplifyUIBuilder {

class DeleteComponentRequest;

class DeleteComponentRequestPrivate : public AmplifyUIBuilderRequestPrivate {

public:
    DeleteComponentRequestPrivate(const AmplifyUIBuilderRequest::Action action,
                                   DeleteComponentRequest * const q);
    DeleteComponentRequestPrivate(const DeleteComponentRequestPrivate &other,
                                   DeleteComponentRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteComponentRequest)

};

} // namespace AmplifyUIBuilder
} // namespace QtAws

#endif
