/*
    Copyright 2013-2021 Paul Colby

    This file is part of QtAws.

    QtAws is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    QtAws is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the QtAws.  If not, see <http://www.gnu.org/licenses/>.
*/

#ifndef QTAWS_DELETESTORAGEVIRTUALMACHINEREQUEST_P_H
#define QTAWS_DELETESTORAGEVIRTUALMACHINEREQUEST_P_H

#include "fsxrequest_p.h"
#include "deletestoragevirtualmachinerequest.h"

namespace QtAws {
namespace FSx {

class DeleteStorageVirtualMachineRequest;

class DeleteStorageVirtualMachineRequestPrivate : public FSxRequestPrivate {

public:
    DeleteStorageVirtualMachineRequestPrivate(const FSxRequest::Action action,
                                   DeleteStorageVirtualMachineRequest * const q);
    DeleteStorageVirtualMachineRequestPrivate(const DeleteStorageVirtualMachineRequestPrivate &other,
                                   DeleteStorageVirtualMachineRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteStorageVirtualMachineRequest)

};

} // namespace FSx
} // namespace QtAws

#endif
